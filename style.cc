@import url('https://fonts.googleapis.com/css2?family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&display=swap');

*{
    font-family: 'Poppins', sans-serif;
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    scroll-behavior: smooth; 
}


header {
    ba: #f0f0f0;
    width: 100%;
    position: fixed;
    z-index: 999;
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 10px 200px ;
}

.logo{
    text-decoration: none;
    color: #3a6cf4;
    text-transform: uppercase;
    font-weight: 700;
    font-size: 1.8em;
}

.navigation a{
    color: #3a6cf4;
    text-decoration: none;
    font-size: 1.1em;
    font-weight: 500;
    padding-left: 30px;
}

.navigation a:hover{
    color: #601cfc;
}

section {
    padding: 100px 200px;
}

.main {
    width: 100%;
    min-height: 100vh;
    display: flex;
    align-items: center;
    background: url(images/background.jpeg) no-repeat;
    background-size: cover;
    background-position: center;
    background-attachment: fixed;
}

.main h2 {
    color: #fff;
    font-size: 1.4em;
    font-weight: 500;
}

.main h2 span {
    display: inline-block;
    margin-top: 10px;
    color: #4e9eff;
    font-size: 3em;
    font-weight: 600;
}

.main h3 {
    color: #fff;
    font-size: 2em;
    font-weight: 700;
    letter-spacing: 1px;
    margin-top: 10px;
    margin-bottom: 30px;
}

.main-btn {
    color: #fff;
    background-color: #3a6cf4;
    text-decoration: none;
    font-size: 1.1em;
    font-weight: 600;
    display: inline-block;
    padding: 0.9375em 2.1875em;
    letter-spacing: 1px;
    border-radius: 15px;
    margin-bottom: 40px;
    transition: 0.7s ease;
}

.main-btn:hover {
    background-color: #0a49f6;
    transform: scale(1.1);
}

.social-icons a {
    color: #fff;
    font-size: 1.7em;
    padding-right: 30px;
}

.title {
    display: flex;
    justify-content: center;
    color: #3a6cf4;
    font-size: 2.2em;
    font-weight: 800;
    margin-bottom: 30px;
}

.content {
    display: flex;
    justify-content: center;
    flex-direction: row;
    flex-wrap: wrap;
}

.card {
    background-color: #fff;
    width: 21.25em;
    box-shadow: 0 5px 25px rgba(1 1 1 / 15%);
    border-radius: 10px;
    padding: 25px;
    margin: 15px;
    transition: 0.7s ease;
}

.card:hover {
    transform: scale(1.1);
}

.card .icon {
    color: #3a6cf4;
    font-size: 8em;
    text-align: center;
}

.info {
    text-align: center;
}

.info h3{
    color: #3a6cf4;
    font-size: 1.2em;
    font-weight: 700;
    margin: 10px;
}

.projects {
    background-color: #000016;
}

.projects .content{
    margin-top: 30px;
}

.project-card {
    background-color: #fff;
    border: 1px solid #fff;
    min-height: 14em;
    width: 23em;
    overflow: hidden;
    border-radius: 10px;
    margin: 20px;
    transition: 0.7s ease;
}

.project-card:hover {
   transform: scale(1.1);
}

.project-card:hover .project-image {
    opacity: 0.9;
 }

.project-image img{
    width: 100%
}

.project-info {
    padding: 1em;
}

.project-category {
    font-size: 0.8em;
    color: #000;
}

.project-title {
    display: flex;
    justify-content: space-between;
    text-transform: uppercase;
    font-weight: 800;
    margin-top: 10px;
}

.more-details {
    text-decoration: none;
    color: #3a6cf4;
}

.more-details:hover {
    color: #601cfc;
}

.contact .icon{
    font-size: 4.5em;
}

.contact .info h3 {
    color: #000;
}

.contact .info p {
    font-size: 1.5em;
}

.footer {
    background-color: #000016;
    color: #fff;
    padding: 2em;
    display: flex;
    justify-content: space-between;
}

.footer-title {
    font-size: 1.3em;
    font-weight: 600;
}

.footer-title span {
    color: #3a6cf4;
}

.footer .social-icons a{
    font-size: 1.3em;
    padding: 0 12px 0 0;
}

@media (max-width:1023px){
    header{
        padding: 12px 20px;
    }

    .navigation a{
        padding-left: 10px;
    }

    .title{
        font-size: 1.8em;
    }

    section{
        padding: 80px 20px;
    }

    .main-content h2{
        font-size: 1em;
    }

    .main-content h3{
        font-size: 1.6em;
    }

    .content{
        flex-direction: column;
        align-items: center;
    }

}

@media (max-width:641px){
    body{
        font-size: 12px;
    }

    .main-content h2{
        font-size: 0.8em;
    }

    .main-content h3{
        font-size: 1.4em;
    }
}

@media (max-width:300px){
    body{
        font-size: 10px;
     
    }
}
