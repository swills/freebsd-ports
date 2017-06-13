# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/security/p5-Net-SSLGlue/Makefile 417562 2016-06-26 17:15:46Z sunpoet $

PORTNAME=	Net-SSLGlue
PORTVERSION=	1.058
CATEGORIES=	security net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add/extend SSL support for common perl modules

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-Socket-SSL>=1.190:security/p5-IO-Socket-SSL
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
