# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/finance/p5-Finance-Currency-Convert-WebserviceX/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Finance-Currency-Convert-WebserviceX
PORTVERSION=	0.07001
PORTREVISION=	1
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Lightweight currency conversion using WebserviceX.NET

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Module-Install>=0.65:devel/p5-Module-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
