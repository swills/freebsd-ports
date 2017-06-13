# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/databases/p5-DBIx-Class-UUIDColumns/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-Class-UUIDColumns
PORTVERSION=	0.02006
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBIx::Class::UUIDColumns - Implicit uuid columns

BUILD_DEPENDS=	p5-Class-Accessor-Grouped>=0:devel/p5-Class-Accessor-Grouped \
		p5-DBD-SQLite>=1.11:databases/p5-DBD-SQLite \
		p5-DBIx-Class>=0.07005:databases/p5-DBIx-Class \
		p5-Data-UUID>=0:devel/p5-Data-UUID
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
