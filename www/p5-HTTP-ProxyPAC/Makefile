# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-ProxyPAC/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTTP-ProxyPAC
PORTVERSION=	0.31
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Use a proxy auto config file to get proxy info

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-JE>0:www/p5-JE \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
