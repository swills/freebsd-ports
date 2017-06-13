# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_project_revenue/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_project_revenue
PORTVERSION=	2.8.1
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_project_revenue-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Project Revenue Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_project>=2.8.0:finance/trytond28_project \
		trytond28_product>=2.8.0:finance/trytond28_product

CONFLICTS=	trytond_project_revenue-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
