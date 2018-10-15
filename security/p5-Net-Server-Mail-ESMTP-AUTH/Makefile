# Created by: Zane C. Bowers <vvelox@vvelox.net>
# $FreeBSD: head/security/p5-Net-Server-Mail-ESMTP-AUTH/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Net-Server-Mail-ESMTP-AUTH
PORTVERSION=	0.2
CATEGORIES=	security mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Plain and login auth methods for Net::Server::Mail::ESMTP

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-Server-Mail>=0:mail/p5-Net-Server-Mail

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
