document.addEventListener('DOMContentLoaded', () => {
    // Smooth scrolling for navigation links
    document.querySelectorAll('a[href^="#"]').forEach(anchor => {
        anchor.addEventListener('click', function (e) {
            e.preventDefault();
            document.querySelector(this.getAttribute('href')).scrollIntoView({
                behavior: 'smooth'
            });
        });
    });

    // Parallax effect
    window.addEventListener('scroll', () => {
        const parallaxSections = document.querySelectorAll('.parallax-section');
        parallaxSections.forEach(section => {
            const scrollPosition = window.pageYOffset;
            const sectionSpeed = section.dataset.speed || 0.5;
            section.style.backgroundPositionY = `${scrollPosition * sectionSpeed}px`;
        });
    });

 