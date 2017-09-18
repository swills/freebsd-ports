# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Server-Simple/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	HTTP-Server-Simple
PORTVERSION=	0.52
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple standalone HTTP daemon

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI>=0:www/p5-CGI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
