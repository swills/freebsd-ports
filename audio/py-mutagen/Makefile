# Created by: Byung-Hee HWANG <bh@izb.knu.ac.kr>
# $FreeBSD: head/audio/py-mutagen/Makefile 477097 2018-08-13 18:20:46Z sunpoet $

PORTNAME=	mutagen
PORTVERSION=	1.41.1
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python-based audio metadata tag reader and writer

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USES=		python shebangfix
USE_PYTHON=	autoplist concurrent distutils
SHEBANG_FILES=	tools/*

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
