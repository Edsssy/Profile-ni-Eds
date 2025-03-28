document.addEventListener("mousemove", function (event) {
    let bubble = document.createElement("div");
    bubble.classList.add("bubble");

    let size = Math.random() * 20 + 10; 
    bubble.style.width = size + "px";
    bubble.style.height = size + "px";

    bubble.style.left = event.clientX + "px";
    bubble.style.top = event.clientY + "px";

    document.body.appendChild(bubble);

    setTimeout(() => {
        bubble.remove();
    }, 3000);
});
