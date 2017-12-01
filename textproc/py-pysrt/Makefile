# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/textproc/py-pysrt/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pysrt
PORTVERSION=	1.1.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	SubRip (.srt) subtitle parser and writer

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}chardet>0:textproc/py-chardet@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
