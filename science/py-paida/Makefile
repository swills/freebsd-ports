# Created by: Vsevolod Stakhov <vsevolod@highsecure.ru>
# $FreeBSD: head/science/py-paida/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	paida
PORTVERSION=	3.2.1.2.10
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-3.2.1_2.10.1
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-3.2.1_2.10.1

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tkinter>0:x11-toolkits/py-tkinter@${FLAVOR}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pure Python scientific analysis package

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
