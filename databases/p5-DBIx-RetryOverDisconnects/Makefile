# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: head/databases/p5-DBIx-RetryOverDisconnects/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-RetryOverDisconnects
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Keeps database connection persistent

BUILD_DEPENDS=	p5-DBI>0:databases/p5-DBI \
		p5-Exception-Class>0:devel/p5-Exception-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
