# $FreeBSD: head/security/py-cracklib/Makefile 467862 2018-04-21 08:33:47Z amdmi3 $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python bindings for cracklib

LICENSE=	LGPL21

LIB_DEPENDS=	libcrack.so:security/cracklib

MASTERDIR=	${.CURDIR}/../cracklib
BUILD_WRKSRC=	${WRKSRC}/python
INSTALL_WRKSRC=	${BUILD_WRKSRC}

PYTHON_SLAVEPORT=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		"{s#__version__ = '[^']*'#__version__ = '${PORTVERSION}'#;}" \
		${BUILD_WRKSRC}/*.py

.include "${MASTERDIR}/Makefile"
