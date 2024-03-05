const data = [
  {
    id: 1,
    title: "A",
    description: "Avion",
    assetId: "airplane_asset",
    scale: "0.10 0.10 0.10",
    scaleOne: "0.13 0.13 0.13",
    scaleTwo: "0.15 0.15 0.15",
    isObj: false
  },
  {
    id: 2,
    title: "B",
    description: "Barco",
    assetId: "boat_asset",
    scale: "4 4 4",
    scaleOne: "5 5 5",
    scaleTwo: "6 6 6",
    isObj: false
  },
  {
    id: 3,
    title: "C",
    description: "Celular", 
    assetId: "iphone_asset",
    scale: "0.4 0.4 0.4",
    scaleOne: "0.8 0.8 0.8",
    scaleTwo: "1 1 1",
    isObj: false
  },
  {
    id: 4,
    title: "D",
    description: "Dinosaurio", 
    assetId: "dinosaur_asset",
    scale: "0.4 0.4 0.4",
    scaleOne: "0.6 0.6 0.6",
    scaleTwo: "0.8 0.8 0.8",
    isObj: false
  },
  {
    id: 5,
    title: "E",
    description: "Enano", 
    assetId: "gnome_asset",
    scale: "0.010 0.010 0.010",
    scaleOne: "0.015 0.015 0.015",
    scaleTwo: "0.02 0.02 0.02",
    isObj: false
  },
  {
    id: 6,
    title: "F",
    description: "Flor",
    assetId: "flower_asset",
    scale: "0.09 0.09 0.09",
    scaleOne: "0.11 0.11 0.11",
    scaleTwo: "0.13 0.13 0.13",
    isObj: false
  },
  {
    id: 7,
    title: "G",
    description: "Gorila", 
    assetId: "gorilla_asset",
    scale: "9 9 9",
    scaleOne: "10 10 10",
    scaleTwo: "11 11 11",
    isObj: false
  },
  {
    id: 8,
    title: "H",
    description: "Hamburguesa", 
    assetId: "hamburguer3_asset",
    scale: "1.5 1.5 1.5",
    scaleOne: "1.7 1.7 1.7",
    scaleTwo: "1.9 1.9 1.9",
    isObj: false
  },
  {
    id: 9,
    title: "I",
    description: "Iglesia", 
    assetId: "church_asset",
    scale: "0.08 0.08 0.08",
    scaleOne: "0.10 0.10 0.10",
    scaleTwo: "0.12 0.12 0.12",
    isObj: false
  },
  {
    id: 10,
    title: "J",
    description: "Jaguar",
    assetId: "jaguar_asset",
    scale: "0.01 0.01 0.01",
    scaleOne: "0.03 0.03 0.03",
    scaleTwo: "0.05 0.05 0.05",
    isObj: false
  },
  {
    id: 11,
    title: "K",
    description: "Kiwi", 
    assetId: "kiwi_fruit_asset",
    scale: "6 6 6",
    scaleOne: "7 7 7",
    scaleTwo: "8 8 8",
    isObj: false
  },
  {
    id: 12,
    title: "L",
    description: "Loro",
    assetId: "parrot2_asset",
    scale: "0.8 0.8 0.8",
    scaleOne: "0.10 0.10 0.10",
    scaleTwo: "0.12 0.12 0.12",
    isObj: false
  },
  {
    id: 13,
    title: "M",
    description: "Moto", 
    assetId: "motorcycle_asset",
    scale: "0.04 0.04 0.04",
    scaleOne: "0.06 0.06 0.06",
    scaleTwo: "0.08 0.08 0.08",
    isObj: false
  },
  {
    id: 14,
    title: "N",
    description: "Nido",
    objAsset: "nest_asset_obj",
    mtlAsset: "nest_asset_mtl",
    scale: "0.5 0.5 0.5",
    scaleOne: "0.7 0.7 0.7",
    scaleTwo: "0.9 0.9 0.9",
    isObj: true
  },
  {
    id: 15,
    title: "O",
    description: "Ovni", 
    assetId: "ovni_asset",
    scale: "0.1 0.1 0.1",
    scaleOne: "0.3 0.3 0.3",
    scaleTwo: "0.5 0.5 0.5",
    isObj: false
  },
  {
    id: 16,
    title: "P",
    description: "Pulpo", 
    objAsset: "octopus_asset_obj",
    mtlAsset: "octopus_asset_mtl",
    scale: "1.8 1.8 1.8",
    scaleOne: "2 2 2",
    scaleTwo: "2.2 2.2 2.2",
    isObj: true
  },
  {
    id: 17,
    title: "Q",
    description: "Queso", 
    assetId: "chesse_asset",
    scale: "0.2 0.2 0.2",
    scaleOne: "0.4 0.4 0.4",
    scaleTwo: "0.6 0.6 0.6",
    isObj: false
  },
  {
    id: 18,
    title: "R",
    description: "Raton", 
    assetId: "rat_asset",
    scale: "0.5 0.5 0.5",
    scaleOne: "0.7 0.7 0.7",
    scaleTwo: "0.9 0.9 0.9",
    isObj: false
  },

  {
    id: 19,
    title: "S",
    description: "Sombrilla",
    objAsset: "umbrella_asset_obj",
    mtlAsset: "umbrella_asset_mtl",
    scale: "0.010 0.010 0.010",
    scaleOne: "0.013 0.013 0.013",
    scaleTwo: "0.015 0.15 0.015",
    isObj: true
  },
  {
    id: 20,
    title: "T",
    description: "Telescopio",
    objAsset: "telescope_asset_obj",
    mtlAsset: "telescope_asset_mtl",
    scale: "1 1 1",
    scaleOne: "1.25 1.25 1.25",
    scaleTwo: "1.5 1.5 1.5",
    isObj: true
  },
  {
    id: 21,
    title: "U",
    description: "Uva", 
    assetId: "grape_asset",
    scale: "0.05 0.05 0.05",
    scaleOne: "0.07 0.07 0.07",
    scaleTwo: "0.09 0.09 0.09",
    isObj: false
  },
  {
    id: 22,
    title: "V",
    description: "Venado", 
    assetId: "deer_asset", 
    scale: "0.4 0.4 0.4",
    scaleOne: "0.6 0.6 0.6",
    scaleTwo: "0.8 0.8 0.8",
  },
  {
    id: 23,
    title: "W",
    description: "Waffle", 
    assetId: "waffle_asset",
    scale: "0.5 0.5 0.5",
    scaleOne: "0.7 0.7 0.7",
    scaleTwo: "1 1 1",
    isObj: false
  },

  {
    id: 24,
    title: "X",
    description: "Xilofono", 
    assetId: "xylophone_asset",
    scale: "0.025 0.025 0.025",
    scaleOne: "0.05 0.05 0.05",
    scaleTwo: "0.075 0.075 0.075",
    isObj: false
  },
  {
    id: 25,
    title: "Y",
    description: "Yuca", 
    assetId: "yuca_asset",
    scale: "0.5 0.5 0.5",
    scaleOne: "0.7 0.7 0.7",
    scaleTwo: "0.9 0.9 0.9",
    isObj: false
  },
  {
    id: 26,
    title: "Z",
    description: "Zanahoria", 
    assetId: "carrot_asset",
    scale: "0.0025 0.0025 0.0025",
    scaleOne: "0.005 0.005 0.005",
    scaleTwo: "0.0075 0.0075 0.0075",
    isObj: false
  }
];

(function() {
  "use strict";

  $(document).ready(init);
  //starting point
  function init() {
    var config = {
      scaleFlag: 0,
      isVolume: true,
      currentObject: {},
      currentId: 0,
      prev: 0
    };
    var rotateBtn = $(".rotate"),
      scaleBtn = $(".scale"),
      gotitBtn = $(".gotit"),
      prevBtn = $(".prev"),
      nextBtn = $(".next"),
      volumeBtn = $("#volume"),
      helpBtn = $(".help");

    if (!("speechSynthesis" in window)) {
      // Synthesis support. show volume button
      config.isVolume = false;
      $("#volume").css("display", "none");
    }

    /* DO SOMETHING WITH THE AIRPLANE */
    addObject(data, config.currentId, 1);

    helpBtn.click(function(e) {
      e.preventDefault();
      $("#video_demo")[0].style.display = "block";
    });

    gotitBtn.click(function() {
      gotitBtn.parent().css({
        display: "none"
      });
    });

    rotateBtn.click(function() {
      if (rotateBtn.hasClass("rotate_fade")) {
        config.currentObject.emit("endRotate");
        rotateBtn.removeClass("rotate_fade");
      } else {
        config.currentObject.emit("rotate");
        rotateBtn.addClass("rotate_fade");
      }
    });

    scaleBtn.click(function() {
      let { scale, scaleOne, scaleTwo } = data[config.currentId];

      if (config.scaleFlag == 0) {
        config.scaleFlag = 1;
        config.currentObject.setAttribute("scale", (scale = scaleOne));
        scaleBtn.addClass("scale_one");
      } else if (config.scaleFlag == 1) {
        config.scaleFlag = 2;
        config.currentObject.setAttribute("scale", (scale = scaleTwo));
        scaleBtn.addClass("scale_two");
        scaleBtn.removeClass("scale_one");
      } else if (config.scaleFlag == 2) {
        config.scaleFlag = 0;
        config.currentObject.setAttribute("scale", (scale = scale));
        scaleBtn.removeClass("scale_two");
      }
    });

    prevBtn.click(function() {
      config.scaleFlag = 0;
      scaleBtn.removeClass("scale_one");
      scaleBtn.removeClass("scale_two");
      rotateBtn.removeClass("rotate_fade");
      if (config.currentId !== 0) {
        config.currentId -= 1;
      } else {
        config.currentId = data.length - 1;
      }

      addObject(data, config.currentId, config.currentId + 1);
      hideObjects(data, config.currentId);
      $(".title").html(data[config.currentId].description);
      speak();
    });

    nextBtn.click(function() {
      config.scaleFlag = 0;
      scaleBtn.removeClass("scale_one");
      scaleBtn.removeClass("scale_two");
      rotateBtn.removeClass("rotate_fade");
      if (config.currentId !== data.length - 1) {
        config.currentId += 1;
      } else {
        config.currentId = 0;
      }
      addObject(data, config.currentId, config.currentId - 1);
      //hide all rest of the objects
      hideObjects(data, config.currentId);
      $(".title").html(data[config.currentId].description);
      speak();
    });

    volumeBtn.click(function() {
      config.isVolume = !config.isVolume;
      if (config.isVolume) {
        volumeBtn.removeClass("rotate_fade");
      } else {
        volumeBtn.addClass("rotate_fade");
      }
    });

    function createEntity(currentData) {
      let entity = document.createElement("a-entity");

      entity.setAttribute("id", "obj_" + currentData.id);
      entity.setAttribute("rotation", "0 -90 0");
      entity.setAttribute("side", "double");
      entity.setAttribute("position", "0.0 0.2 0");
      entity.setAttribute("scale", currentData.scale);

      config.currentObject = entity;
      return entity;
    }

    function addObject(data, toRemove, toRemoveId) {
      let currentData = data[config.currentId];
      if (document.querySelector("#obj_" + currentData.id)) {
        document
          .querySelector("#obj_" + currentData.id)
          .setAttribute("visible", "true");
        return;
      }

      /** Create a 3d model entity and set as a current object */
      let entity = createEntity(currentData);

      if (currentData.isObj === true) {
        entity.setAttribute(
          "obj-model",
          "obj: #" + currentData.objAsset + "; mtl: #" + currentData.mtlAsset
        );
      } else {
        entity.setAttribute("gltf-model", "#" + currentData.assetId);
      }

      //Add animation
      let animation = document.createElement("a-animation");
      animation.setAttribute("attribute", "rotation");
      animation.setAttribute("begin", "rotate");
      animation.setAttribute("end", "endRotate");
      animation.setAttribute("dur", "26000");
      animation.setAttribute("fill", "forwards");
      animation.setAttribute("to", "0 270 0");
      animation.setAttribute("repeat", "indefinite");
      animation.setAttribute("easing", "linear");

      let marker = document.querySelector("#aframe-scene");
      entity.appendChild(animation);
      marker.appendChild(entity);
    }

    function hideObjects(data, currentId) {
      let current_id = currentId + 1;
      if (document.querySelector("#obj_" + data.id)) {
        document
          .querySelector("#obj_" + data.id)
          .setAttribute("visible", "true");
      }
      data.forEach(element => {
        if (document.querySelector("#obj_" + element.id) !== null) {
          if (element.id === current_id) {
            document
              .querySelector("#obj_" + element.id)
              .setAttribute("visible", true);
          } else {
            document
              .querySelector("#obj_" + element.id)
              .setAttribute("visible", false);
          }
        }
      });
    }
    //speak feature
    function speak() {
      if (!config.isVolume) return;
      let text =
        data[config.currentId].title +
        " de "; 
      if (data[config.currentId].description == "Waffle")
        text = text + "guafle";
      else 
        text = text + data[config.currentId].description;
      
      let msg = new SpeechSynthesisUtterance();
      msg.lang = "es-PE";
      msg.rate = 8 / 10;
      msg.pitch = 1;
      msg.text = text;
      speechSynthesis.speak(msg);
    }
  }

  //Camera feature check
  function hasGetUserMedia() {
    return !!(
      navigator.getUserMedia ||
      navigator.webkitGetUserMedia ||
      navigator.mozGetUserMedia ||
      navigator.msGetUserMedia
    );
  }

  if (hasGetUserMedia()) {
    // Good to go!
    $("#splashScreen").css("display", "block");
  } else {
    let template = "<p>This feature is not supported in your browser.</p>";
    $("#noMedia").append(template);
    $("#noMedia").css("display", "block");
  }
})();
