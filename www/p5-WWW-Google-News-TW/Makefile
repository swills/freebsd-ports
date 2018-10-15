# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/www/p5-WWW-Google-News-TW/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	WWW-Google-News-TW
PORTVERSION=	0.12
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Access to Google's Taiwan News Service (Not Usenet)

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-URI>=0:net/p5-URI \
		p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
