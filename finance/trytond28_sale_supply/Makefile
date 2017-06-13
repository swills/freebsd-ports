# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_sale_supply/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_sale_supply
PORTVERSION=	2.8.4
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_sale_supply-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Sale Supply Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_sale>=2.8.1:finance/trytond28_sale

CONFLICTS=	trytond_sale_supply-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
