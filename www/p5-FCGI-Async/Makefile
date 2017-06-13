# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/www/p5-FCGI-Async/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	FCGI-Async
PORTVERSION=	0.22
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module to allow use of FastCGI asynchronously

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-Async>=0:devel/p5-IO-Async \
		p5-Net-Async-FastCGI>=0:www/p5-Net-Async-FastCGI \
		p5-Net-FastCGI>=0:www/p5-Net-FastCGI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Identity>=0:devel/p5-Test-Identity \
		p5-Test-HexString>=0:devel/p5-Test-HexString \
		p5-Test-Refcount>0:devel/p5-Test-Refcount

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
