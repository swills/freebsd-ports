# Created by: blubee <hello@blubee.me>
# $FreeBSD: head/devel/pycanberra/Makefile 454831 2017-11-24 18:40:22Z pi $

PORTNAME=		pycanberra
DISTVERSION=		1
CATEGORIES=		devel

MAINTAINER=	hello@blubee.me
COMMENT=	Very basic wrapper for libcanberra

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes
GH_ACCOUNT=	totdb
GH_TAGNAME=	88c53cd

post-patch:
	@(cd ${WRKSRC} && ${MKDIR} ${WRKSRC}/pycanberra && \
	${MV} pycanberra.py ${WRKSRC}/pycanbberra && \
	${TOUCH} __init__.py)

.include <bsd.port.mk>
