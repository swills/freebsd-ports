# Created by: Alexander Timoshenko <gonzo@univ.kiev.ua>
# $FreeBSD: head/misc/p5-asterisk-perl/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	asterisk-perl
PORTVERSION=	1.08
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITCHARLIE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asterisk perl library

LICENSE=	ART10
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-Telnet>=0:net/p5-Net-Telnet

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
