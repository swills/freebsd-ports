# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/databases/p5-DBIx-AnyDBD/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-AnyDBD
PORTVERSION=	2.01
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBD independent class

BUILD_DEPENDS=	p5-DBI>=0:databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
