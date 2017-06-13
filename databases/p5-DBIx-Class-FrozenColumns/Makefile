# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: head/databases/p5-DBIx-Class-FrozenColumns/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-Class-FrozenColumns
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Store virtual columns inside another column

RUN_DEPENDS=	p5-DBIx-Class>=0.07003:databases/p5-DBIx-Class \
		p5-JSON-XS>=0:converters/p5-JSON-XS \
		p5-Storable>=2.15:devel/p5-Storable
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
