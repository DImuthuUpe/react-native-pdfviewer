import { NitroModules } from 'react-native-nitro-modules'
import type { Pdfviewer as PdfviewerSpec } from './specs/pdfviewer.nitro'

export const Pdfviewer =
  NitroModules.createHybridObject<PdfviewerSpec>('Pdfviewer')