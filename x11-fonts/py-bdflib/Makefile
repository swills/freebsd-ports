# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/x11-fonts/py-bdflib/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	bdflib
PORTVERSION=	1.0.3
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	x11-fonts python
MASTER_SITES=	CHEESESHOP/source/b/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Library for working with BDF font files

LICENSE=	GPLv3

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

post-patch:
	@${REINPLACE_CMD} -e 's|version=guess_version()|version="${PORTVERSION}"|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
