# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_stock_inventory_location/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_stock_inventory_location
PORTVERSION=	2.8.1
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_stock_inventory_location-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Stock Inventory Location Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_stock>=2.8.2:finance/trytond28_stock

CONFLICTS=	trytond_stock_inventory_location-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
