# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: head/databases/rubygem-dm-mysql-adapter/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	dm-mysql-adapter
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	MySQL Adapter for DataMapper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-dm-do-adapter>=${PORTVERSION}:databases/rubygem-dm-do-adapter \
		rubygem-do_mysql>=0.10.6:databases/rubygem-do_mysql

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
