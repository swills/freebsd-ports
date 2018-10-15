# Created by: Don Owens <don@regexguy.com>
# $FreeBSD: head/databases/p5-DBIx-Wrapper/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	DBIx-Wrapper
PORTVERSION=	0.29
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	don@regexguy.com
COMMENT=	Wrapper around Perl's DBI module

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>=0:databases/p5-DBI
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
