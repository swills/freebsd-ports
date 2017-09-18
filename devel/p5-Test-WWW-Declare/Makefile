# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/p5-Test-WWW-Declare/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Test-WWW-Declare
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Declarative testing for your web app

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Test-WWW-Mechanize>=0:devel/p5-Test-WWW-Mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
