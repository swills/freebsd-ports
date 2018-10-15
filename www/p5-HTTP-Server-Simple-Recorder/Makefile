# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Server-Simple-Recorder/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTTP-Server-Simple-Recorder
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mixin to record HTTP::Server::Simple's sockets

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Server-Simple>=0:www/p5-HTTP-Server-Simple \
		p5-Test-HTTP-Server-Simple>=0:www/p5-Test-HTTP-Server-Simple \
		p5-IO-Tee>=0:devel/p5-IO-Tee

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
