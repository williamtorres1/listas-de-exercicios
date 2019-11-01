var listElement = document.querySelector('#app ul');
var inputElement = document.querySelector('#app input');
var buttonElement = document.querySelector('#app button');



var todos = JSON.parse((localStorage.getItem('list_todos'))) || [];

function renderToDos(){

    listElement.innerHTML = '';
    for(todo of todos){
        var toDoElement = document.createElement('li');
        var toDoText = document.createTextNode(todo);
        var linkElement = document.createElement('a');
        var linkText = document.createTextNode('Exclude');

        var pos = todos.indexOf(todo);
        linkElement.setAttribute('onclick', 'deleteToDo('+ pos +')');

        linkElement.setAttribute('href', '#');
        linkElement.appendChild(linkText);

        toDoElement.appendChild(toDoText);
        toDoElement.appendChild(linkElement);
        listElement.appendChild(toDoElement);
    }
}

renderToDos();

function addToDo(){
    var toDoText = inputElement.value;

    todos.push(toDoText);

    inputElement.value = '';
    renderToDos();
    saveToStorage();
    saveToStorage();
}

buttonElement.onclick = addToDo;

function deleteToDo(pos){
    todos.splice(pos, 1);
    renderToDos();
    saveToStorage();
}


function saveToStorage(){
    localStorage.setItem('list_todos', JSON.stringify(todos));
    
}