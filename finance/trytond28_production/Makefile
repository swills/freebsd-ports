# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_production/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	trytond28_production
PORTVERSION=	2.8.1
PORTREVISION=	1
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_production-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Production Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_product>=2.8.0:finance/trytond28_product \
		trytond28_company>=2.8.0:finance/trytond28_company \
		trytond28_stock>=2.8.2:finance/trytond28_stock

CONFLICTS=	trytond_production-2.[46].*

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
