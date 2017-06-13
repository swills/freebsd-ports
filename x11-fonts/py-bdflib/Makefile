# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/x11-fonts/py-bdflib/Makefile 428973 2016-12-20 02:21:44Z wen $

PORTNAME=	bdflib
PORTVERSION=	1.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=	x11-fonts python
MASTER_SITES=	CHEESESHOP/source/b/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Library for working with BDF font files

LICENSE=	GPLv3

NO_ARCH=	yes
USES=		python:2
USE_PYTHON=	autoplist distutils

post-patch:
	@${REINPLACE_CMD} -e 's|version=guess_version()|version="${PORTVERSION}"|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
