# Created by: petef@FreeBSD.org
# $FreeBSD: head/net/p5-File-Rsync/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	File-Rsync
PORTVERSION=	0.49
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl convenience wrapper for the rsync(1) program

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	rsync:net/rsync \
		p5-IPC-Run3>=0.042:devel/p5-IPC-Run3

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
