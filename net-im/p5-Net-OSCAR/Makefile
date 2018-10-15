# Created by: Kelly Cochran <kcochran@trolans.net>
# $FreeBSD: head/net-im/p5-Net-OSCAR/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Net-OSCAR
PORTVERSION=	1.928
PORTREVISION=	1
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for the AOL Instant Messenger OSCAR protocol

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-SOCKS>=0:net/p5-Socks \
		p5-XML-Parser>=0:textproc/p5-XML-Parser

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
