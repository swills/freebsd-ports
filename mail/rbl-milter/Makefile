# Created by: wolpert
# $FreeBSD: head/mail/rbl-milter/Makefile 408774 2016-02-13 09:03:15Z dinoex $

PORTNAME=	rbl-milter
PORTVERSION=	0.30
PORTREVISION=	4
CATEGORIES=	mail
MASTER_SITES=	http://opensource.confusticate.com/rbl-milter/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Milter that adds mail header warnings on mail from open-relays

USES=		gmake
GNU_CONFIGURE=	yes

USE_RC_SUBR=	rblmilter
PLIST_FILES=	sbin/rbl-milter

CONFIGURE_ARGS+=	--with-sendmail=${MILTERBASE} \
			--with-sendmail-obj=${MILTERBASE}/lib

.include "${.CURDIR}/../sendmail/bsd.milter.mk"

.include <bsd.port.mk>
