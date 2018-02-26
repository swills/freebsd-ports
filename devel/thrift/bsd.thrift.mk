#
# $FreeBSD: head/devel/thrift/bsd.thrift.mk 462862 2018-02-24 20:40:27Z lx $
#
# to use:
# in your makefile, set:
# PORTVERSION=	${THRIFT_PORTVERSION}
# see $PORTSDIR/devel/thrift for examples 
THRIFT_PORTVERSION=	0.11.0

CONFIGURE_ARGS+=	\
		--without-tests

