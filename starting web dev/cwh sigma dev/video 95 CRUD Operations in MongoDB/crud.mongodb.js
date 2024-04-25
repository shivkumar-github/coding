// CRUD operations (you may also see documentation on mongo db website)
use('crudDB')
console.log(db);

// create 
db.createCollection('courses');

// db.courses.insertOne({
//     name: "Harrys web dev free course",
//     price: 0,
//     assignments: 12,
//     projects: 45
// })

// db.courses.insertMany([
//         {
//             name: "Harrys web dev free course",
//             price: 0,
//             assignments: 12,
//             projects: 45
//         },
//         {
//             name: "Sarah's Python Crash Course",
//             price: 0,
//             assignments: 10,
//             projects: 30
//         },
//         {
//             name: "Alex's Data Science Bootcamp",
//             price: 0,
//             assignments: 15,
//             projects: 50
//         },
//         {
//             name: "John's Java Programming Basics",
//             price: 0,
//             assignments: 8,
//             projects: 25
//         },
//         {
//             name: "Emily's Graphic Design Fundamentals",
//             price: 0,
//             assignments: 10,
//             projects: 20
//         },
//         {
//             name: "Mike's JavaScript Mastery Course",
//             price: 0,
//             assignments: 14,
//             projects: 40
//         },
//         {
//             name: "Sophia's UX Design Workshop",
//             price: 0,
//             assignments: 6,
//             projects: 15
//         },
//         {
//             name: "David's Cybersecurity Essentials",
//             price: 0,
//             assignments: 10,
//             projects: 35
//         },
//         {
//             name: "Emma's Mobile App Development Course",
//             price: 0,
//             assignments: 12,
//             projects: 30
//         },
//         {
//             name: "Liam's Machine Learning Fundamentals",
//             price: 0,
//             assignments: 10,
//             projects: 40
//     }]
// )

// // read
// let a = db.courses.find({ price: 0 }); // returns cursor which can be understand as iterator in database
// console.log(a.count());
// console.log(a.toArray());

// let b = db.courses.findOne({ price: 0 });
// console.log(b)

// UPDATE
db.courses.updateOne({ price: 0 }, { $set: { price: 100 } });
db.courses.updateMany({ price: 0 }, { $set: { price: 1000} });;

// DELETE
db.courses.deleteOne({ price: 1000 });
db.courses.deleteMany({ price: 1000 });

