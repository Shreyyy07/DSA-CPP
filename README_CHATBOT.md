# DSA-CPP Chatbot Interface

This repository now includes a chatbot interface with action buttons for various AI-powered features.

## Features

The chatbot interface includes the following action buttons:

### 🌐 Translate
- Translates the input text to different languages
- Requires text input to be enabled
- Shows loading state during processing

### ✨ Improve
- Improves the quality and clarity of input text
- Requires text input to be enabled
- Shows loading state during processing

### 📷 Image to Text
- Converts images to text using OCR technology
- Does not require text input (works independently)
- Shows loading state during processing

### 🎨 Image Generation
- Generates images based on text descriptions
- Requires text input to be enabled
- Shows loading state during processing

## Files

- `Chatbot.tsx` - React TypeScript component for the chatbot interface
- `Chatbot.css` - Styling for the chatbot interface with responsive design
- `index.html` - Standalone HTML implementation for testing
- `package.json` - Project configuration for React/TypeScript setup

## Usage

### As a React Component

```tsx
import Chatbot from './Chatbot';

function App() {
  return (
    <div>
      <Chatbot />
    </div>
  );
}
```

### Standalone HTML

1. Start a local server:
   ```bash
   npm start
   ```
   or
   ```bash
   python3 -m http.server 8000
   ```

2. Open http://localhost:8000 in your browser

## Design Features

- **Responsive Design**: Adapts to different screen sizes
- **Accessibility**: Proper ARIA labels and keyboard navigation
- **Loading States**: Visual feedback during processing
- **Button States**: Buttons are disabled/enabled based on input state
- **Clean UI**: Modern, clean interface with proper spacing and typography

## Browser Support

- Chrome (latest)
- Firefox (latest)
- Safari (latest)
- Edge (latest)

## Requirements Met

✅ Action buttons are visible on initial page load  
✅ Buttons are positioned below the chat input field  
✅ All four required buttons are implemented (Translate, Improve, Image to Text, Image Generation)  
✅ Proper styling and responsive design  
✅ Functional handlers for all buttons  
✅ Loading states and user feedback  
✅ Clean, maintainable code structure  