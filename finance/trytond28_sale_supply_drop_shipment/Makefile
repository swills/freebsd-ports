# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_sale_supply_drop_shipment/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	trytond28_sale_supply_drop_shipment
PORTVERSION=	2.8.4
PORTREVISION=	1
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_sale_supply_drop_shipment-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Sale Supply Drop Shipment Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_sale_supply>=2.8.1:finance/trytond28_sale_supply

CONFLICTS=	trytond_sale_supply_drop_shipment-2.[46].*

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
