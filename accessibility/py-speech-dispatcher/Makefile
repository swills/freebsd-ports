# $FreeBSD: head/accessibility/py-speech-dispatcher/Makefile 460827 2018-02-03 17:06:46Z amdmi3 $

PORTREVISION=	1
CATEGORIES=	accessibility audio python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python bindings for Speech Dispatcher

SPEECH_SLAVE=	yes

MASTERDIR=	${.CURDIR:H}/speech-dispatcher

BUILD_WRKSRC=	${WRKSRC}/src/api/python
INSTALL_WRKSRC=	${BUILD_WRKSRC}

PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
