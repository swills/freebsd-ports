# Created by: Eugene Grosbein <ports@grosbein.net>
# $FreeBSD: head/devel/py-xcaplib/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	xcaplib
PORTVERSION=	1.2.0
CATEGORIES=	devel python
MASTER_SITES=	http://download.ag-projects.com/XCAP/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python XCAP client library

LICENSE=	LGPL20+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}application>=1.1.5:devel/py-application@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>=2.1.2:devel/py-lxml@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}twisted>=0:devel/py-twisted@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
