# Created by: Eugene Grosbein <ports@grosbein.net>
# $FreeBSD: head/devel/py-xcaplib/Makefile 448558 2017-08-22 16:40:58Z sunpoet $

PORTNAME=	xcaplib
PORTVERSION=	1.0.16
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	http://download.ag-projects.com/XCAP/ \
		http://grosbein.net/python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python XCAP client library

LICENSE=	LGPL20 LGPL21 LGPL3
LICENSE_COMB=	dual

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}application>=1.1.5:devel/py-application \
		${PYTHON_PKGNAMEPREFIX}lxml>=2.1.2:devel/py-lxml \
		${PYTHON_PKGNAMEPREFIX}twisted>=0:devel/py-twisted

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
