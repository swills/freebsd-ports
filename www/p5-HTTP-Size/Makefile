# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Size/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	HTTP-Size
PORTVERSION=	1.15
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Get the byte size of an internet resource

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-SimpleLinkExtor>=0:www/p5-HTML-SimpleLinkExtor \
		p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
