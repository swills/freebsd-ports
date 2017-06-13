# Created by: will
# $FreeBSD: head/www/p5-CGI-Cache/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-Cache
PORTVERSION=	1.4207
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to cache output of time-intensive CGI scripts

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-Cache>=0:devel/p5-Cache \
		p5-Cache-Cache>=0:devel/p5-Cache-Cache \
		p5-Tie-Restore>=0:devel/p5-Tie-Restore
RUN_DEPENDS:=	${BUILD_DEPENDS}
BUILD_DEPENDS+=	p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-File-Slurp>=0:devel/p5-File-Slurp

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
