# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-darcsver/Makefile 481150 2018-10-03 09:08:33Z amdmi3 $

PORTNAME=	darcsver
PORTVERSION=	1.7.4
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Generate a version number from darcs history

LICENSE=	BSD

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's#(doc_loc, data_fnames)##g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
