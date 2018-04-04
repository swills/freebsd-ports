# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-python-Levenshtein/Makefile 466391 2018-04-04 04:37:27Z yuri $

PORTNAME=	python-Levenshtein
PORTVERSION=	0.12.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Fast computation of Levenshtein distance and string similarity

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/Levenshtein/_levenshtein.so

.include <bsd.port.mk>
