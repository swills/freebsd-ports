# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Cache-Transparent/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTTP-Cache-Transparent
PORTVERSION=	1.4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implementation of http get that keeps a local cache of fetched pages

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
