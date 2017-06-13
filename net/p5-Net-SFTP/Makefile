# Created by: Trevor Corpropst <tcornpropst@cox.net>
# $FreeBSD: head/net/p5-Net-SFTP/Makefile 413984 2016-04-25 09:11:31Z sunpoet $

PORTNAME=	Net-SFTP
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl5 module implementing Secure File Transfer Protocol client

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Net-SSH-Perl>=0:net/p5-Net-SSH-Perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
