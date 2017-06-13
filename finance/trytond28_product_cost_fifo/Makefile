# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_product_cost_fifo/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_product_cost_fifo
PORTVERSION=	2.8.2
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_product_cost_fifo-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Product Cost Fifo Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_product>=2.8.0:finance/trytond28_product \
		trytond28_stock>=2.8.2:finance/trytond28_stock

CONFLICTS=	trytond_product_cost_fifo-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
