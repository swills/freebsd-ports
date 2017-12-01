# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-fuzzywuzzy/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	fuzzywuzzy
PORTVERSION=	0.15.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Fuzzy string matching using Levenshtein Distance

LICENSE=	GPL
LICENSE_FILE=	LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-Levenshtein>0:devel/py-python-Levenshtein@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
