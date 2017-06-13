# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/p5-Test-WWW-Declare/Makefile 442357 2017-06-01 23:52:24Z sunpoet $

PORTNAME=	Test-WWW-Declare
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Declarative testing for your web app

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Test-WWW-Mechanize>=0:devel/p5-Test-WWW-Mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
