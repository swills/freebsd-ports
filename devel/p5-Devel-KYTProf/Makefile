# $FreeBSD: head/devel/p5-Devel-KYTProf/Makefile 416157 2016-05-30 15:33:44Z mat $

PORTNAME=	Devel-KYTProf
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for simple profiler

BUILD_DEPENDS=	p5-Class-Data-Inheritable>0:devel/p5-Class-Data-Inheritable \
		p5-UNIVERSAL-require>0:devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBI>0:databases/p5-DBI \
		p5-DBD-SQLite>0:databases/p5-DBD-SQLite

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
