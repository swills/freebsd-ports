# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: head/databases/p5-DBIx-RetryOverDisconnects/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	DBIx-RetryOverDisconnects
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Keeps database connection persistent

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>0:databases/p5-DBI \
		p5-Exception-Class>0:devel/p5-Exception-Class

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
